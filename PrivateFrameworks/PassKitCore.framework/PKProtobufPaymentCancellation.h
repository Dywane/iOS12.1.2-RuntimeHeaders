/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentCancellation : PBCodable <NSCopying> {
    NSString * _remotePaymentRequestIdentifier;
}

@property (nonatomic, readonly) bool hasRemotePaymentRequestIdentifier;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemotePaymentRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)remotePaymentRequestIdentifier;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
