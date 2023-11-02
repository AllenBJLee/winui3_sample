#include "pch.h"
#include "Data.h"

#if __has_include("Data.g.cpp")
#include "Data.g.cpp"
#endif

namespace winrt::GridStyleListView::implementation {
    Data::Data(hstring const& name, hstring const& service) : m_strName(name), m_strService(service) {

    }

    hstring Data::Name() {
        return m_strName;
    }

    void Data::Name(hstring const& name) {
        if (m_strName != name) {
            m_strName = name;
            m_PropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"Name"));
        }

    }

    hstring Data::Service() {
        return m_strService;
    }

    void Data::Service(hstring const& service) {
        if (m_strService != service) {
            m_strService = service;
            m_PropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"Service"));
        }
    }

    event_token Data::PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler) {
        return m_PropertyChanged.add(handler);
    }

    void Data::PropertyChanged(event_token const& token) noexcept {
        m_PropertyChanged.remove(token);
    }
}