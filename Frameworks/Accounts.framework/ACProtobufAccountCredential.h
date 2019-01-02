/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufAccountCredential : PBCodable <NSCopying> {
    NSMutableArray * _credentialItems;
    NSString * _credentialType;
    NSMutableArray * _dirtyProperties;
    bool  _requiresTouchID;
}

@property (nonatomic, retain) NSMutableArray *credentialItems;
@property (nonatomic, copy) NSDictionary *credentialItemsDictionary;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic, retain) NSMutableArray *dirtyProperties;
@property (nonatomic) bool requiresTouchID;

+ (Class)credentialItemsType;
+ (Class)dirtyPropertiesType;

- (void).cxx_destruct;
- (void)addCredentialItems:(id)arg1;
- (void)addDirtyProperties:(id)arg1;
- (void)clearCredentialItems;
- (void)clearDirtyProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialItems;
- (id)credentialItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)credentialItemsCount;
- (id)credentialItemsDictionary;
- (id)credentialType;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dirtyProperties;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requiresTouchID;
- (void)setCredentialItems:(id)arg1;
- (void)setCredentialItemsDictionary:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setRequiresTouchID:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
