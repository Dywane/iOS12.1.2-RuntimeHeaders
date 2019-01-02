/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray * _providers;
    PUSessionInfo * _sessionInfo;
    PXExtendedTraitCollection * _traitCollection;
}

@property (nonatomic, readonly) NSArray *providers;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)gadgetProviders;
- (id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2;
- (id)providers;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)traitCollection;

@end
