/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceValue : NSObject <NSCopying> {
    unsigned long long  _hash;
    bool  _isHistoric;
    NSArray * _values;
}

@property (nonatomic, readonly) bool isHistoric;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValues:(id)arg1;
- (id)initWithValues:(id)arg1 isHistoric:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHistoric;
- (id)values;

@end
