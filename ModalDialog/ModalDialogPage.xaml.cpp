// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "ModalDialogPage.xaml.h"
#if __has_include("ModalDialogPage.g.cpp")
#include "ModalDialogPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ModalDialog::implementation
{
    ModalDialogPage::ModalDialogPage()
    {
        InitializeComponent();
    }

    int32_t ModalDialogPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void ModalDialogPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void ModalDialogPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
