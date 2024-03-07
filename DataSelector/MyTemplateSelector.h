#pragma once

#include "MyTemplateSelector.g.h"

namespace winrt::DataSelector::implementation {
    struct MyTemplateSelector : MyTemplateSelectorT<MyTemplateSelector> {
        MyTemplateSelector();

        Microsoft::UI::Xaml::DataTemplate SelectTemplateCore(IInspectable const&);
        Microsoft::UI::Xaml::DataTemplate SelectTemplateCore(IInspectable const&, Microsoft::UI::Xaml::DependencyObject const&);

        Microsoft::UI::Xaml::DataTemplate Normal();
        void Normal(Microsoft::UI::Xaml::DataTemplate dataTemplate);

        Microsoft::UI::Xaml::DataTemplate Accent();
        void Accent(Microsoft::UI::Xaml::DataTemplate dataTemplate);

    private:
        Microsoft::UI::Xaml::DataTemplate m_normal{ nullptr };
        Microsoft::UI::Xaml::DataTemplate m_accent{ nullptr };
    };
};

namespace winrt::DataSelector::factory_implementation {
    struct MyTemplateSelector : MyTemplateSelectorT<MyTemplateSelector, implementation::MyTemplateSelector> {

    };
}