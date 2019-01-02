/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRichTitleCardSection : PBCodable <NSSecureCoding, _SFPBRichTitleCardSection> {
    int  _auxiliaryAlignment;
    NSString * _auxiliaryBottomText;
    int  _auxiliaryBottomTextColor;
    NSString * _auxiliaryMiddleText;
    NSString * _auxiliaryTopText;
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSString * _contentAdvisory;
    NSString * _descriptionText;
    NSString * _footnote;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _hideVerticalDivider;
    _SFPBImage * _imageOverlay;
    bool  _isCentered;
    NSArray * _moreGlyphs;
    NSArray * _offers;
    _SFPBActionItem * _playAction;
    int  _playActionAlign;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    float  _rating;
    NSString * _ratingText;
    _SFPBImage * _reviewGlyph;
    bool  _reviewNewLine;
    NSString * _reviewText;
    int  _separatorStyle;
    NSString * _subtitle;
    bool  _thumbnailCropCircle;
    NSString * _title;
    int  _titleAlign;
    _SFPBImage * _titleImage;
    bool  _titleNoWrap;
    int  _titleWeight;
    NSString * _type;
}

@property (nonatomic) int auxiliaryAlignment;
@property (nonatomic, copy) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (nonatomic, copy) NSString *auxiliaryMiddleText;
@property (nonatomic, copy) NSString *auxiliaryTopText;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideVerticalDivider;
@property (nonatomic, retain) _SFPBImage *imageOverlay;
@property (nonatomic) bool isCentered;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *moreGlyphs;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, retain) _SFPBActionItem *playAction;
@property (nonatomic) int playActionAlign;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) float rating;
@property (nonatomic, copy) NSString *ratingText;
@property (nonatomic, retain) _SFPBImage *reviewGlyph;
@property (nonatomic) bool reviewNewLine;
@property (nonatomic, copy) NSString *reviewText;
@property (nonatomic) int separatorStyle;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) bool thumbnailCropCircle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int titleAlign;
@property (nonatomic, retain) _SFPBImage *titleImage;
@property (nonatomic) bool titleNoWrap;
@property (nonatomic) int titleWeight;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addMoreGlyphs:(id)arg1;
- (void)addOffers:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (int)auxiliaryAlignment;
- (id)auxiliaryBottomText;
- (int)auxiliaryBottomTextColor;
- (id)auxiliaryMiddleText;
- (id)auxiliaryTopText;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearMoreGlyphs;
- (void)clearOffers;
- (void)clearPunchoutOptions;
- (id)contentAdvisory;
- (id)descriptionText;
- (id)dictionaryRepresentation;
- (id)footnote;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (bool)hideVerticalDivider;
- (id)imageOverlay;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCentered;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)moreGlyphs;
- (id)moreGlyphsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreGlyphsCount;
- (id)offers;
- (id)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (id)playAction;
- (int)playActionAlign;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (float)rating;
- (id)ratingText;
- (bool)readFrom:(id)arg1;
- (id)reviewGlyph;
- (bool)reviewNewLine;
- (id)reviewText;
- (int)separatorStyle;
- (void)setAuxiliaryAlignment:(int)arg1;
- (void)setAuxiliaryBottomText:(id)arg1;
- (void)setAuxiliaryBottomTextColor:(int)arg1;
- (void)setAuxiliaryMiddleText:(id)arg1;
- (void)setAuxiliaryTopText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentAdvisory:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHideVerticalDivider:(bool)arg1;
- (void)setImageOverlay:(id)arg1;
- (void)setIsCentered:(bool)arg1;
- (void)setMoreGlyphs:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPlayAction:(id)arg1;
- (void)setPlayActionAlign:(int)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setRatingText:(id)arg1;
- (void)setReviewGlyph:(id)arg1;
- (void)setReviewNewLine:(bool)arg1;
- (void)setReviewText:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailCropCircle:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAlign:(int)arg1;
- (void)setTitleImage:(id)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(int)arg1;
- (void)setType:(id)arg1;
- (id)subtitle;
- (bool)thumbnailCropCircle;
- (id)title;
- (int)titleAlign;
- (id)titleImage;
- (bool)titleNoWrap;
- (int)titleWeight;
- (id)type;
- (void)writeTo:(id)arg1;

@end
