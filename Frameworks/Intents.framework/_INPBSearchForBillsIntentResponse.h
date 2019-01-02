/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForBillsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForBillsIntentResponse> {
    NSArray * _bills;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *bills;
@property (nonatomic, readonly) unsigned long long billsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)billsType;

- (void).cxx_destruct;
- (void)addBills:(id)arg1;
- (id)bills;
- (id)billsAtIndex:(unsigned long long)arg1;
- (unsigned long long)billsCount;
- (void)clearBills;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBills:(id)arg1;
- (void)writeTo:(id)arg1;

@end
