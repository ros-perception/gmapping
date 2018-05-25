#ifndef _GMAPPING_PERF_
#define _GMAPPING_PERF_

namespace GMapping {

class TraceScope {
  public:
    TraceScope(const char * str);
    ~TraceScope();
};

} // namespace GMapping

#define TRACE(str) GMapping::TraceScope trace_scope##__COUNTER__(str)

#endif
