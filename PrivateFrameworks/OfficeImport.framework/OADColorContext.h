/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorContext : NSObject {
    OADColorMap * mMap;
    <OADColorPalette> * mPalette;
    OADColorScheme * mScheme;
}

@property (nonatomic, readonly) OADColorMap *map;
@property (nonatomic, retain) <OADColorPalette> *palette;
@property (nonatomic, readonly) OADColorScheme *scheme;

+ (id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;

- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)map;
- (id)palette;
- (id)scheme;
- (void)setPalette:(id)arg1;

@end
