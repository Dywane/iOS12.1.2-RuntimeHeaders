/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactSharingTransformer : NSObject <PMLTransformerProtocol> {
    bool  _isNegative;
    NSString * _language;
    struct { 
        unsigned long long s[2]; 
    }  _rng;
    NSString * _targetMapping;
}

@property bool isNegative;
@property (retain) NSString *language;
@property (retain) NSString *targetMapping;

- (void).cxx_destruct;
- (id)initWithTargetMapping:(id)arg1 language:(id)arg2;
- (bool)isNegative;
- (id)language;
- (void)setIsNegative:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setTargetMapping:(id)arg1;
- (id)targetMapping;
- (id)transform:(id)arg1;

@end
