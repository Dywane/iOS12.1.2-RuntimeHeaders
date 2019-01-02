/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationData : HMFObject <HMFDumpState, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _appDataDictionary;
    NSUUID * _parentUUID;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSMutableDictionary *appDataDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *parentUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appDataDictionary;
- (id)applicationDataForIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 parentUUID:(id)arg2;
- (id)initWithParentUUID:(id)arg1;
- (bool)isEmpty;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)parentUUID;
- (void)removeApplicationDataForIdentifier:(id)arg1;
- (void)setAppDataDictionary:(id)arg1;
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;
- (void)setParentUUID:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)updateParentUUIDIfNil:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)uuid;

@end
