///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentAddLinkPasswordDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentAddLinkPasswordDetails` struct.
///
/// Added a password to the link for the shared file or folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentAddLinkPasswordDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy, nullable) NSString *originalFolderName;

/// Shared folder type. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
/// @param sharedFolderType Shared folder type. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                 originalFolderName:(nullable NSString *)originalFolderName
                   sharedFolderType:(nullable NSString *)sharedFolderType;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentAddLinkPasswordDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentAddLinkPasswordDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentAddLinkPasswordDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharedContentAddLinkPasswordDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentAddLinkPasswordDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` object.
///
+ (DBTEAMLOGSharedContentAddLinkPasswordDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
