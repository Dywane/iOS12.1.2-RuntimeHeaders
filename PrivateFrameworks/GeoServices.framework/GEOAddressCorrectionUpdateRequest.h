/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    NSString * _addressID;
    NSMutableArray * _addressResults;
    int  _correctionStatus;
    struct { 
        unsigned int correctionStatus : 1; 
    }  _has;
    NSMutableArray * _significantLocations;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) NSMutableArray *addressResults;
@property (nonatomic) int correctionStatus;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic) bool hasCorrectionStatus;
@property (nonatomic, retain) NSMutableArray *significantLocations;

+ (Class)addressResultType;
+ (Class)significantLocationType;

- (void).cxx_destruct;
- (int)StringAsCorrectionStatus:(id)arg1;
- (void)addAddressResult:(id)arg1;
- (void)addSignificantLocation:(id)arg1;
- (id)addressID;
- (id)addressResultAtIndex:(unsigned long long)arg1;
- (id)addressResults;
- (unsigned long long)addressResultsCount;
- (void)clearAddressResults;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionStatus;
- (id)correctionStatusAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasCorrectionStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAddressID:(id)arg1;
- (void)setAddressResults:(id)arg1;
- (void)setCorrectionStatus:(int)arg1;
- (void)setHasCorrectionStatus:(bool)arg1;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (id)significantLocations;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
