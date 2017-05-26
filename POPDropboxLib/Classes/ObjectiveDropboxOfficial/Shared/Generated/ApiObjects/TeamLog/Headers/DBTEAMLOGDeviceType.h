///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceType` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGDeviceTypeTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGDeviceType` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGDeviceTypeTag) {
  /// (no description).
  DBTEAMLOGDeviceTypeMobile,

  /// (no description).
  DBTEAMLOGDeviceTypeDesktop,

  /// (no description).
  DBTEAMLOGDeviceTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGDeviceTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "mobile".
///
/// @return An initialized instance.
///
- (instancetype)initWithMobile;

///
/// Initializes union class with tag state of "desktop".
///
/// @return An initialized instance.
///
- (instancetype)initWithDesktop;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "mobile".
///
/// @return Whether the union's current tag state has value "mobile".
///
- (BOOL)isMobile;

///
/// Retrieves whether the union's current tag state has value "desktop".
///
/// @return Whether the union's current tag state has value "desktop".
///
- (BOOL)isDesktop;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGDeviceType` union.
///
@interface DBTEAMLOGDeviceTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceType` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceType` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGDeviceType *)instance;

///
/// Deserializes `DBTEAMLOGDeviceType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceType` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceType` object.
///
+ (DBTEAMLOGDeviceType *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
