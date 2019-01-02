/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {
    struct { 
        unsigned int maximum : 1; 
        unsigned int minimum : 1; 
        unsigned int treatmentId : 1; 
    }  _has;
    long long  _maximum;
    long long  _minimum;
    long long  _treatmentId;
}

@property (nonatomic) bool hasMaximum;
@property (nonatomic) bool hasMinimum;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic) long long maximum;
@property (nonatomic) long long minimum;
@property (nonatomic) long long treatmentId;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaximum;
- (bool)hasMinimum;
- (bool)hasTreatmentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maximum;
- (void)mergeFrom:(id)arg1;
- (long long)minimum;
- (bool)readFrom:(id)arg1;
- (void)setHasMaximum:(bool)arg1;
- (void)setHasMinimum:(bool)arg1;
- (void)setHasTreatmentId:(bool)arg1;
- (void)setMaximum:(long long)arg1;
- (void)setMinimum:(long long)arg1;
- (void)setTreatmentId:(long long)arg1;
- (long long)treatmentId;
- (void)writeTo:(id)arg1;

@end
