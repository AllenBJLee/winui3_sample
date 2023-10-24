// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "ModalDialogPage.g.h"

namespace winrt::ModalDialog::implementation
{
    struct ModalDialogPage : ModalDialogPageT<ModalDialogPage>
    {
        ModalDialogPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::ModalDialog::factory_implementation
{
    struct ModalDialogPage : ModalDialogPageT<ModalDialogPage, implementation::ModalDialogPage>
    {
    };
}
