///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGEnableDisableChangePolicy;
@class DBTEAMLOGFileCommentsChangePolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileCommentsChangePolicyDetails` struct.
///
/// Enabled or disabled commenting on team files.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileCommentsChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New commenting on team files policy.
@property (nonatomic, readonly) DBTEAMLOGEnableDisableChangePolicy *dNewValue;

/// Previous commenting on team files policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGEnableDisableChangePolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New commenting on team files policy.
/// @param previousValue Previous commenting on team files policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGEnableDisableChangePolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGEnableDisableChangePolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New commenting on team files policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGEnableDisableChangePolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileCommentsChangePolicyDetails` struct.
///
@interface DBTEAMLOGFileCommentsChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileCommentsChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileCommentsChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileCommentsChangePolicyDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGFileCommentsChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileCommentsChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileCommentsChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileCommentsChangePolicyDetails`
/// object.
///
+ (DBTEAMLOGFileCommentsChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
