/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEventMetadata : NSObject {
    NSString * _categoryDescription;
    double  _confidence;
    NSString * _originBundleId;
    NSArray * _participants;
    NSArray * _schemaOrg;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSString *categoryDescription;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *originBundleId;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) NSArray *schemaOrg;
@property (nonatomic, readonly) unsigned char type;

+ (id)describeType:(unsigned char)arg1;
+ (id)eventMetadataFromEKEvent:(id)arg1;
+ (unsigned char)eventTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)categoryDescription;
- (double)confidence;
- (id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6;
- (id)jsonObject;
- (id)originBundleId;
- (id)participants;
- (id)schemaOrg;
- (id)toJsonString;
- (unsigned char)type;

@end
