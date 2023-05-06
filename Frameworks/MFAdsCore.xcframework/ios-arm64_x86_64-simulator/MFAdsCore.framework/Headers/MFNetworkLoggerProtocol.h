//
//  MFNetworkLoggerProtocol.h
//  NetWorkDemo
//
//  Created by cc on 2022/4/22.
//

#import <Foundation/Foundation.h>
#import "MFNetworkMessageCode.h"

/// The log levels used by GULNetworkLogger.
typedef NS_ENUM(NSInteger, MFNetworkLogLevel) {
  kMFNetworkLogLevelError = 3,
  kMFNetworkLogLevelWarning = 4,
  kMFNetworkLogLevelInfo = 6,
  kMFNetworkLogLevelDebug = 7,
};

NS_ASSUME_NONNULL_BEGIN

@protocol MFNetworkLoggerProtocol <NSObject>

@required
/// Tells the delegate to log a message with an array of contexts and the log level.
- (void)GULNetwork_logWithLevel:(MFNetworkLogLevel)logLevel
                    messageCode:(MFNetworkMessageCode)messageCode
                        message:(NSString *)message
                       contexts:(NSArray *)contexts;

/// Tells the delegate to log a message with a context and the log level.
- (void)GULNetwork_logWithLevel:(MFNetworkLogLevel)logLevel
                    messageCode:(MFNetworkMessageCode)messageCode
                        message:(NSString *)message
                        context:(id)context;

/// Tells the delegate to log a message with the log level.
- (void)GULNetwork_logWithLevel:(MFNetworkLogLevel)logLevel
                    messageCode:(MFNetworkMessageCode)messageCode
                        message:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
