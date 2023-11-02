#pragma once

#include "Data.g.h"

namespace winrt::GridStyleListView::implementation {
    struct Data : DataT<Data> {
        Data() = default;
        Data(hstring const& name, hstring const& service);

        hstring Name();
        void Name(hstring const& name);

        hstring Service();
        void Service(hstring const& service);

        event_token PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(event_token const& token) noexcept;

    private:
        hstring m_strName;
        hstring m_strService;

        event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> m_PropertyChanged;
    };
}

namespace winrt::GridStyleListView::factory_implementation {
    struct Data : DataT<Data, implementation::Data> {

    };
}