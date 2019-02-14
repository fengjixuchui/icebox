#pragma once

#include "core.hpp"
#include "types.hpp"
#include "utils/pe.hpp"

#include "callstack.hpp"
#include "monitor/monitor.hpp"

#include <memory>

namespace plugin
{
    struct FdpSan
    {
         FdpSan(core::Core& core);
        ~FdpSan();

        bool setup(proc_t target);

        struct Data;
        std::unique_ptr<Data> d_;
    };
} // namespace plugin
