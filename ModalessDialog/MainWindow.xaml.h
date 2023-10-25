// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "MainWindow.g.h"
#include "Dialog.xaml.h"

namespace winrt::ModalessDialog::implementation
{
    using winrt::com_ptr;
    struct MainWindow : MainWindowT<MainWindow>
    {
    private :
        winrt::ModalessDialog::Dialog m_dlg{ nullptr };

    private :

    public :
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void OnShow_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        void OnHide_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        void OnMainWindow_Closed(::winrt::Windows::Foundation::IInspectable const& sender, ::winrt::Microsoft::UI::Xaml::WindowEventArgs const& args);
    };
}

namespace winrt::ModalessDialog::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
