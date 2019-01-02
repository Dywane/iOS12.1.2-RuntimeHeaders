/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPPadding : NSObject <LPCSSText, NSCopying> {
    LPPointUnit * _bottom;
    LPPointUnit * _leading;
    LPPointUnit * _top;
    LPPointUnit * _trailing;
}

@property (nonatomic, retain) LPPointUnit *bottom;
@property (nonatomic, retain) LPPointUnit *leading;
@property (nonatomic, retain) LPPointUnit *top;
@property (nonatomic, retain) LPPointUnit *trailing;

- (void).cxx_destruct;
- (id)_lp_CSSText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })asInsetsForView:(id)arg1;
- (id)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)leading;
- (void)setBottom:(id)arg1;
- (void)setLeading:(id)arg1;
- (void)setTop:(id)arg1;
- (void)setTrailing:(id)arg1;
- (id)top;
- (id)trailing;

@end
