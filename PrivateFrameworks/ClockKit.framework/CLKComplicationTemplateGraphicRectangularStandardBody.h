/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateGraphicRectangularStandardBody : CLKComplicationTemplate {
    CLKTextProvider * _body1TextProvider;
    CLKTextProvider * _body2TextProvider;
    CLKFullColorImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *body1TextProvider;
@property (nonatomic, copy) CLKTextProvider *body2TextProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)body1TextProvider;
- (id)body2TextProvider;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setBody1TextProvider:(id)arg1;
- (void)setBody2TextProvider:(id)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;

@end
