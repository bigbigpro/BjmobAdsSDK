/*
 * Copyright 2017 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "MFReachabilityChecker.h"

#if !TARGET_OS_WATCH
typedef SCNetworkReachabilityRef (*MFReachabilityCreateWithNameFn)(CFAllocatorRef allocator,
                                                                    const char *host);

typedef Boolean (*MFReachabilitySetCallbackFn)(SCNetworkReachabilityRef target,
                                                SCNetworkReachabilityCallBack callback,
                                                SCNetworkReachabilityContext *context);
typedef Boolean (*MFReachabilityScheduleWithRunLoopFn)(SCNetworkReachabilityRef target,
                                                        CFRunLoopRef runLoop,
                                                        CFStringRef runLoopMode);
typedef Boolean (*MFReachabilityUnscheduleFromRunLoopFn)(SCNetworkReachabilityRef target,
                                                          CFRunLoopRef runLoop,
                                                          CFStringRef runLoopMode);

typedef void (*MFReachabilityReleaseFn)(CFTypeRef cf);

struct MFReachabilityApi {
  MFReachabilityCreateWithNameFn createWithNameFn;
  MFReachabilitySetCallbackFn setCallbackFn;
  MFReachabilityScheduleWithRunLoopFn scheduleWithRunLoopFn;
  MFReachabilityUnscheduleFromRunLoopFn unscheduleFromRunLoopFn;
  MFReachabilityReleaseFn releaseFn;
};
#endif
@interface MFReachabilityChecker (Internal)

- (const struct MFReachabilityApi *)reachabilityApi;
- (void)setReachabilityApi:(const struct MFReachabilityApi *)reachabilityApi;

@end
