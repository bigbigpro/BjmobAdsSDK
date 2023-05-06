//
//  MFAdLog.h
//

#import <Foundation/Foundation.h>

#if __has_include(<MFAdsCore/MFAdSdkConfig.h>)
#import <MFAdsCore/MFAdSdkConfig.h>
#else
#import "MFAdSdkConfig.h"
#endif

#define MF_LEVEL_FATAL_LOG(format,...)  [MFAdLog customLogWithFormatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MFAdLogLevel_Fatal]
#define MF_LEVEL_ERROR_LOG(format,...)  [MFAdLog customLogWithFormatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MFAdLogLevel_Error]
#define MF_LEVEL_WARING_LOG(format,...)  [MFAdLog customLogWithFormatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MFAdLogLevel_Warning]
#define MF_LEVEL_INFO_LOG(format,...)  [MFAdLog customLogWithFormatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MFAdLogLevel_Info]
#define MF_LEVEL_DEBUG_LOG(format,...)  [MFAdLog customLogWithFormatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MFAdLogLevel_Debug]

#define MFAdLog(format,...)  [MFAdLog customLogWithFormatString:[NSString stringWithFormat:format, ##__VA_ARGS__]]
#define MFAdLogJSONData(data)  [MFAdLog logJsonData:data]

NS_ASSUME_NONNULL_BEGIN


@interface MFAdLog : NSObject

/// 日志输出方法
/// @param formatString 内容
/// @param level  日志等级
+ (void)customLogWithFormatString:(NSString *)formatString
                            level:(MFAdLogLevel)level;

/// 日志输出方法
/// @param formatString 内容
+ (void)customLogWithFormatString:(NSString *)formatString;

/// 记录data类型数据
/// @param data 数据
+ (void)logJsonData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
