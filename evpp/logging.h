#pragma once

#include "evpp/platform_config.h"

#ifdef __cplusplus
// #define GOOGLE_GLOG_DLL_DECL           // 使用静态glog库时，必须定义这个
// #define GLOG_NO_ABBREVIATED_SEVERITIES // 没这个编译会出错,传说因为和Windows.h冲突

// #include <glog/logging.h>

// #ifdef GOOGLE_STRIP_LOG

class CNullLog
{
public:
	CNullLog() = default;

	template<typename T>
	CNullLog& operator<<(const T& t)
	{
		return *this;
	}
};

#ifdef _DEBUG

#if 0
#define LOG_TRACE std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define LOG_DEBUG std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define LOG_INFO  std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define LOG_WARN  std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define LOG_ERROR std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define LOG_FATAL std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define CHECK_NOTnullptr(val) // LOG_ERROR << "'" #val "' Must be non nullptr";

#define DLOG_TRACE std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define DLOG_DEBUG std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define DLOG_INFO  std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define DLOG_WARN  std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define DLOG_ERROR std::cout << __FILENAME__ << ":" << __LINE__ << " "
#define DLOG_FATAL std::cout << __FILENAME__ << ":" << __LINE__ << " "

#else

#define LOG_TRACE CNullLog() 
#define LOG_DEBUG CNullLog() 
#define LOG_INFO  CNullLog() 
#define LOG_WARN  CNullLog() 
#define LOG_ERROR CNullLog() 
#define LOG_FATAL CNullLog() 

#define DLOG_TRACE CNullLog() 
#define DLOG_DEBUG CNullLog()
#define DLOG_INFO  CNullLog()
#define DLOG_WARN  CNullLog()
#define DLOG_ERROR CNullLog()
#define DLOG_FATAL CNullLog()


//#define LOG_TRACE std::cout 
//#define LOG_DEBUG std::cout 
//#define LOG_INFO  std::cout 
//#define LOG_WARN  std::cout 
//#define LOG_ERROR std::cout 
//#define LOG_FATAL std::cout 
//#define CHECK_NOTnullptr(val) // LOG_ERROR << "'" #val "' Must be non nullptr";
//
//#define DLOG_TRACE std::cout 
//#define DLOG_DEBUG std::cout 
//#define DLOG_INFO  std::cout 
//#define DLOG_WARN  std::cout 
//#define DLOG_ERROR std::cout 
//#define DLOG_FATAL std::cout 

#endif

#else
#define LOG_TRACE CNullLog() 
#define LOG_DEBUG CNullLog() 
#define LOG_INFO  CNullLog() 
#define LOG_WARN  CNullLog() 
#define LOG_ERROR CNullLog() 
#define LOG_FATAL CNullLog() 

#define DLOG_TRACE CNullLog() 
#define DLOG_DEBUG CNullLog()
#define DLOG_INFO  CNullLog()
#define DLOG_WARN  CNullLog()
#define DLOG_ERROR CNullLog()
#define DLOG_FATAL CNullLog()


#endif
// #endif
#endif // end of define __cplusplus

//#ifdef _DEBUG
//#ifdef assert
//#undef assert
//#endif
//#define assert(expr)  { if (!(expr)) { // LOG_FATAL << #expr ;} }
//#endif