// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.



#include "pch.h"

#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "UIUtil.h"


using namespace winrt;
using namespace Microsoft::UI::Xaml;





// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.


namespace winrt::ModalessDialog::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        auto appWindow = AppWindow();
        
        UiUtil::Resize(appWindow, SizeInt32{ 300, 500 });
        UiUtil::CenterWindow(appWindow);

        // create modaless dialog
        m_dlg = make<Dialog>();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::OnShow_Click(IInspectable const&, RoutedEventArgs const&) {
        if (m_dlg.AppWindow().IsVisible() == true) {
            // do nothing
        }
        else {
            m_dlg.AppWindow().Show(true);
        }
    }

    void MainWindow::OnHide_Click(IInspectable const&, RoutedEventArgs const&) {
        if (m_dlg.AppWindow().IsVisible() == false) {
            // do nothing
        }
        else {
            m_dlg.AppWindow().Hide();
        }
    }

    void MainWindow::OnMainWindow_Closed(::winrt::Windows::Foundation::IInspectable const& sender, ::winrt::Microsoft::UI::Xaml::WindowEventArgs const& args) {
        // close own sub window
        auto dlg = m_dlg.as<Dialog>();
        dlg->CloseDialog();
    }
}
