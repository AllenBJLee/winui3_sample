#include "pch.h"

#include "MyTemplateSelector.h"

#if __has_include("MyTemplateSelector.g.cpp")
#include "MyTemplateSelector.g.cpp"
#endif

namespace winrt::DataSelector::implementation {
    MyTemplateSelector::MyTemplateSelector() {

    }

    Microsoft::UI::Xaml::DataTemplate MyTemplateSelector::SelectTemplateCore(IInspectable const& item) {
        if (unbox_value<int>(item) % 2 == 0) {
            return m_normal;
        }
        else {
            return m_accent;
        }
    }

    Microsoft::UI::Xaml::DataTemplate MyTemplateSelector::SelectTemplateCore(IInspectable const& item, Microsoft::UI::Xaml::DependencyObject const& container) {
        if (unbox_value<int>(item) % 2 == 0) {
            return m_normal;
        }
        else {
            return m_accent;
        }
    }

    Microsoft::UI::Xaml::DataTemplate MyTemplateSelector::Normal() {
        return m_normal;
    }

    void MyTemplateSelector::Normal(Microsoft::UI::Xaml::DataTemplate dataTemplate) {
        if (m_normal != dataTemplate) {
            m_normal = dataTemplate;
        }
    }

    Microsoft::UI::Xaml::DataTemplate MyTemplateSelector::Accent() {
        return m_accent;
    }

    void MyTemplateSelector::Accent(Microsoft::UI::Xaml::DataTemplate dataTemplate) {
        if (m_accent != dataTemplate) {
            m_accent = dataTemplate;
        }
    }
}