////////////////////////////////////////////////////////////////////////////////
//
//  YOUR QUILL
//
////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <concepts>

namespace yq::doodle {
    class DObject;
    class DObjectInfo;
    template <typename T> concept SomeDObject = std::derived_from<T,DObject>;
}
