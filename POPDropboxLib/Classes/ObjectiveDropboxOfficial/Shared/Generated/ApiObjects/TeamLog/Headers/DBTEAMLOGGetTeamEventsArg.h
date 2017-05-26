///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMCOMMONTimeRange;
@class DBTEAMLOGGetTeamEventsArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetTeamEventsArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGetTeamEventsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Number of results to return per call.
@property (nonatomic, readonly) NSNumber *limit;

/// Filter the events by account ID. Return ony events with this account_id as
/// either Actor, Context, or Participants.
@property (nonatomic, readonly, copy, nullable) NSString *accountId;

/// Filter by time range.
@property (nonatomic, readonly, nullable) DBTEAMCOMMONTimeRange *time;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param limit Number of results to return per call.
/// @param accountId Filter the events by account ID. Return ony events with
/// this account_id as either Actor, Context, or Participants.
/// @param time Filter by time range.
///
/// @return An initialized instance.
///
- (instancetype)initWithLimit:(nullable NSNumber *)limit
                    accountId:(nullable NSString *)accountId
                         time:(nullable DBTEAMCOMMONTimeRange *)time;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetTeamEventsArg` struct.
///
@interface DBTEAMLOGGetTeamEventsArgSerializer : NSObject

///
/// Serializes `DBTEAMLOGGetTeamEventsArg` instances.
///
/// @param instance An instance of the `DBTEAMLOGGetTeamEventsArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGetTeamEventsArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGGetTeamEventsArg *)instance;

///
/// Deserializes `DBTEAMLOGGetTeamEventsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGetTeamEventsArg` API object.
///
/// @return An instantiation of the `DBTEAMLOGGetTeamEventsArg` object.
///
+ (DBTEAMLOGGetTeamEventsArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
