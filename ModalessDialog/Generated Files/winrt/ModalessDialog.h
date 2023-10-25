// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_ModalessDialog_H
#define WINRT_ModalessDialog_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220929.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220929.3"
#include "winrt/impl/Microsoft.UI.Xaml.2.h"
#include "winrt/impl/Microsoft.UI.Xaml.Markup.2.h"
#include "winrt/impl/ModalessDialog.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_ModalessDialog_IDialog<D>::MyProperty() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::ModalessDialog::IDialog)->get_MyProperty(&value));
        return value;
    }
    template <typename D> auto consume_ModalessDialog_IDialog<D>::MyProperty(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::ModalessDialog::IDialog)->put_MyProperty(value));
    }
    template <typename D> auto consume_ModalessDialog_IMainWindow<D>::MyProperty() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::ModalessDialog::IMainWindow)->get_MyProperty(&value));
        return value;
    }
    template <typename D> auto consume_ModalessDialog_IMainWindow<D>::MyProperty(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::ModalessDialog::IMainWindow)->put_MyProperty(value));
    }
    template <typename D>
    struct produce<D, winrt::ModalessDialog::IDialog> : produce_base<D, winrt::ModalessDialog::IDialog>
    {
        int32_t __stdcall get_MyProperty(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MyProperty(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MyProperty(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::ModalessDialog::IMainWindow> : produce_base<D, winrt::ModalessDialog::IMainWindow>
    {
        int32_t __stdcall get_MyProperty(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MyProperty(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MyProperty(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::ModalessDialog
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::ModalessDialog::IDialog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::ModalessDialog::IMainWindow> : winrt::impl::hash_base {};
    template<> struct hash<winrt::ModalessDialog::Dialog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::ModalessDialog::MainWindow> : winrt::impl::hash_base {};
    template<> struct hash<winrt::ModalessDialog::XamlMetaDataProvider> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
