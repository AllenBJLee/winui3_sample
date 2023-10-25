// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "Dialog.g.h"

namespace winrt::ModalessDialog::implementation
{
    using winrt::Windows::Foundation::TypedEventHandler;
    using winrt::Microsoft::UI::Xaml::Window;
    using winrt::Microsoft::UI::Xaml::WindowEventArgs;
    using Windows::Foundation::IInspectable;

    struct Dialog : DialogT<Dialog> {
    private :
        bool m_bClosed = false;

    public :
        Dialog();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        // close dialog
        void CloseDialog();

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);

        // add closed event
        void OnEvent_Closed(::winrt::Windows::Foundation::IInspectable const& sender, ::winrt::Microsoft::UI::Xaml::WindowEventArgs const& args);
    };
}

namespace winrt::ModalessDialog::factory_implementation
{
    struct Dialog : DialogT<Dialog, implementation::Dialog>
    {
    };
}
