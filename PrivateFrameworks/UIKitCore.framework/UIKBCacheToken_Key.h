/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBCacheToken_Key : UIKBCacheToken {
    NSString * _annotationString;
    NSString * _cacheDisplayString;
    NSString * _cacheSecondaryDisplayString;
    int  _clipCorners;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _displayInsets;
    int  _displayRowHint;
    int  _displayTypeHint;
    unsigned long long  _groupNeighbors;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    int  _state;
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 8; 
            unsigned int padding : 8; 
        } styling; 
        int intValue; 
    }  _style;
    bool  _usesInsets;
}

+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg2;
+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg2 displayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

- (id)_initWithKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg2 displayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)_stringWithAdditionalValues:(id /* block */)arg1;
- (void)annotateWithBool:(bool)arg1;
- (void)annotateWithInt:(int)arg1;
- (void)annotateWithString:(id)arg1;
- (void)dealloc;
- (int)displayHint;
- (bool)hasKey;
- (void)resetAnnotations;
- (int)rowHint;
- (void)setDisplayHint:(int)arg1;
- (void)setRowHint:(int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)string;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(bool)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })styling;

@end
