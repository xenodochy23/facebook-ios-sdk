/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

@class FBSDKGamingPayload;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(GamingPayloadDelegate)
@protocol FBSDKGamingPayloadDelegate <NSObject>

// MARK: Game Request

/**
 Delegate method will be triggered when a `GamingPayloadObserver` parses a url with a payload and game request ID
 @param payload The payload recieved in the url
 @param gameRequestID The game request ID recieved in the url
 */
@optional
- (void)parsedGameRequestURLContaining:(FBSDKGamingPayload *_Nonnull)payload gameRequestID:(NSString *_Nonnull)gameRequestID;

/**
 Delegate method will be triggered when a `GamingPayloadObserver` parses a gaming context url with a payload and game context token ID. The current gaming context will be update with the context ID.
 @param payload The payload recieved in the url
 */
@optional
- (void)parsedGamingContextURLContaining:(FBSDKGamingPayload *_Nonnull)payload;

@end

NS_ASSUME_NONNULL_END
