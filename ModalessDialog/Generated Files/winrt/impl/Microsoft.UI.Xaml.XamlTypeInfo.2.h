// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_XamlTypeInfo_2_H
#define WINRT_Microsoft_UI_Xaml_XamlTypeInfo_2_H
#include "winrt/impl/Microsoft.UI.Xaml.Markup.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.XamlTypeInfo.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::XamlTypeInfo
{
    struct __declspec(empty_bases) XamlControlsXamlMetaDataProvider : winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,
        impl::require<XamlControlsXamlMetaDataProvider, winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider>
    {
        XamlControlsXamlMetaDataProvider(std::nullptr_t) noexcept {}
        XamlControlsXamlMetaDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider(ptr, take_ownership_from_abi) {}
        XamlControlsXamlMetaDataProvider();
        static auto Initialize();
    };
}
#endif
