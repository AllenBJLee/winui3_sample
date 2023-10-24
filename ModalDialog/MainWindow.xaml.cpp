// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "ModalDialogPage.xaml.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace winrt::Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ModalDialog::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        // Create page control as ModalDialogPage
        auto modalDialogPage = make<ModalDialogPage>();

        // Create `ContentDialog` with Page
        ContentDialog dlg;
        dlg.XamlRoot(Content().XamlRoot());
        dlg.Content(modalDialogPage);
        dlg.Title(box_value(L"Model Dialog"));
        dlg.CloseButtonText(L"Close");

        auto result = dlg.ShowAsync();
    }
}
