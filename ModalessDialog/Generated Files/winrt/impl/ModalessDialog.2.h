// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_ModalessDialog_2_H
#define WINRT_ModalessDialog_2_H
#include "winrt/impl/Microsoft.UI.Xaml.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Markup.1.h"
#include "winrt/impl/ModalessDialog.1.h"
WINRT_EXPORT namespace winrt::ModalessDialog
{
    struct __declspec(empty_bases) Dialog : winrt::ModalessDialog::IDialog,
        impl::base<Dialog, winrt::Microsoft::UI::Xaml::Window>,
        impl::require<Dialog, winrt::Microsoft::UI::Xaml::IWindow, winrt::Microsoft::UI::Xaml::IWindow2>
    {
        Dialog(std::nullptr_t) noexcept {}
        Dialog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::ModalessDialog::IDialog(ptr, take_ownership_from_abi) {}
        Dialog();
    };
    struct __declspec(empty_bases) MainWindow : winrt::ModalessDialog::IMainWindow,
        impl::base<MainWindow, winrt::Microsoft::UI::Xaml::Window>,
        impl::require<MainWindow, winrt::Microsoft::UI::Xaml::IWindow, winrt::Microsoft::UI::Xaml::IWindow2>
    {
        MainWindow(std::nullptr_t) noexcept {}
        MainWindow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::ModalessDialog::IMainWindow(ptr, take_ownership_from_abi) {}
        MainWindow();
    };
    struct __declspec(empty_bases) XamlMetaDataProvider : winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider
    {
        XamlMetaDataProvider(std::nullptr_t) noexcept {}
        XamlMetaDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider(ptr, take_ownership_from_abi) {}
        XamlMetaDataProvider();
    };
}
#endif
