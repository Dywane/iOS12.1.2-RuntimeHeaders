/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTextFeaturization : NSObject {
    NSString * _content;
    NSMutableDictionary * _featureVectors;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableDictionary * _preprocessedContent;
}

- (void).cxx_destruct;
- (id)_featureVectorForMethods:(id)arg1 withVectorLength:(unsigned long long)arg2 withCharacterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 withKey:(id)arg5 withVectorKey:(id)arg6;
- (id)_keyForMethods:(id)arg1;
- (id)_preprocessedContentForMethods:(id)arg1 withKey:(id)arg2;
- (id)_vectorKeyForKey:(id)arg1 withVectorLength:(unsigned long long)arg2 withCharacterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)featureVectorForMethods:(id)arg1 withVectorLength:(unsigned long long)arg2 withCharacterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)initWithContent:(id)arg1;
- (id)preprocessedContentForMethods:(id)arg1;

@end
