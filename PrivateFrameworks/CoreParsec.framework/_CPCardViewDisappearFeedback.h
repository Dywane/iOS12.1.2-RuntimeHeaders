/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCardViewDisappearFeedback : PBCodable <NSSecureCoding, _CPCardViewDisappearFeedback, _CPProcessableFeedback> {
    int  _cardDisappearEvent;
    unsigned long long  _timestamp;
}

@property (nonatomic) int cardDisappearEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (int)cardDisappearEvent;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setCardDisappearEvent:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
