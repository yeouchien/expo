/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

#import <ReactABI16_0_0/ABI16_0_0RCTConvert.h>
#import <ReactABI16_0_0/ABI16_0_0RCTEventEmitter.h>

@interface ABI16_0_0RCTConvert (UIStatusBar)

#if !TARGET_OS_TV
+ (UIStatusBarStyle)UIStatusBarStyle:(id)json;
+ (UIStatusBarAnimation)UIStatusBarAnimation:(id)json;
#endif

@end

@interface ABI16_0_0RCTStatusBarManager : ABI16_0_0RCTEventEmitter

@end
