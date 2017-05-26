///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedNoteOpenedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedNoteOpenedDetails` struct.
///
/// Shared Paper document was opened.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedNoteOpenedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedNoteOpenedDetails` struct.
///
@interface DBTEAMLOGSharedNoteOpenedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedNoteOpenedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharedNoteOpenedDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedNoteOpenedDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharedNoteOpenedDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedNoteOpenedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedNoteOpenedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedNoteOpenedDetails` object.
///
+ (DBTEAMLOGSharedNoteOpenedDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
