// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Resources_0_H
#define WINRT_Windows_UI_Xaml_Resources_0_H
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Resources
{
    struct ICustomXamlResourceLoader;
    struct ICustomXamlResourceLoaderFactory;
    struct ICustomXamlResourceLoaderOverrides;
    struct ICustomXamlResourceLoaderStatics;
    struct CustomXamlResourceLoader;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader> = L"Windows.UI.Xaml.Resources.CustomXamlResourceLoader";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoader";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>{ 0x511A84AB,0x4A88,0x419F,{ 0x85,0x2E,0x54,0x08,0x3B,0x90,0xB0,0x78 } }; // 511A84AB-4A88-419F-852E-54083B90B078
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ 0x5BFD7E49,0x7886,0x44F3,{ 0x8E,0xD3,0x6F,0xEC,0x04,0x63,0xED,0x69 } }; // 5BFD7E49-7886-44F3-8ED3-6FEC0463ED69
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ 0xF851E991,0xAF02,0x46E8,{ 0x9A,0xF8,0x42,0x7B,0x7E,0xBF,0xE9,0xF8 } }; // F851E991-AF02-46E8-9AF8-427B7EBFE9F8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ 0x224FF617,0xE4DC,0x4C27,{ 0xAD,0x32,0xDB,0x93,0xD5,0xD0,0xE5,0xDA } }; // 224FF617-E4DC-4C27-AD32-DB93D5D0E5DA
    template <> struct default_interface<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader>{ using type = winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader; };
    template <> struct abi<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetResource(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall put_Current(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory
    {
        auto CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides
    {
        auto GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics
    {
        [[nodiscard]] auto Current() const;
        auto Current(winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>;
    };
}
#endif
