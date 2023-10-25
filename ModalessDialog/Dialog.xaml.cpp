// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "Dialog.xaml.h"
#if __has_include("Dialog.g.cpp")
#include "Dialog.g.cpp"
#endif

#include "UiUtil.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ModalessDialog::implementation
{
    Dialog::Dialog()
    {
        InitializeComponent();

        UiUtil::Resize(AppWindow(), SizeInt32{ 200, 300 });
        UiUtil::CenterWindow(AppWindow());
    }

    int32_t Dialog::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Dialog::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Dialog::CloseDialog() {
        m_bClosed = true;

        this->Close();
    }

    void Dialog::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }

    void Dialog::OnEvent_Closed(::winrt::Windows::Foundation::IInspectable const& sender, ::winrt::Microsoft::UI::Xaml::WindowEventArgs const& args)  {
        // do not close before parent app is closed.

        if (m_bClosed == false) {
            args.Handled(true);
            this->AppWindow().Hide();
        }
    }
}
