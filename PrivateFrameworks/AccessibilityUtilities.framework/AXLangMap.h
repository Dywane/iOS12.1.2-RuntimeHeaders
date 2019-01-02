/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLangMap : NSObject {
    NSArray * _alternateLanguageIDs;
    bool  _ambiguous;
    NSArray * _associatedAmbiguousLanguages;
    NSArray * _dialects;
    NSString * _generalLanguageID;
    bool  _rtl;
    AXDialectMap * _userPreferredDialect;
    bool  _western;
    AXDialectMap * userLocaleDialect;
}

@property (nonatomic, retain) NSArray *alternateLanguageIDs;
@property (getter=isAmbiguous, nonatomic) bool ambiguous;
@property (nonatomic, retain) NSArray *associatedAmbiguousLanguages;
@property (nonatomic, readonly) AXDialectMap *defaultDialect;
@property (nonatomic, retain) NSArray *dialects;
@property (nonatomic, copy) NSString *generalLanguageID;
@property (getter=isRTL, nonatomic) bool rtl;
@property (nonatomic, readonly) AXDialectMap *userLocaleDialect;
@property (nonatomic) AXDialectMap *userPreferredDialect;
@property (getter=isWestern, nonatomic) bool western;

- (void).cxx_destruct;
- (id)alternateLanguageIDs;
- (id)associatedAmbiguousLanguages;
- (id)basicDescription;
- (id)debugDescription;
- (id)defaultDialect;
- (id)description;
- (id)dialectWithLocaleIdentifier:(id)arg1;
- (id)dialects;
- (id)generalLanguageID;
- (id)initWithLanguageID:(id)arg1 isWestern:(bool)arg2 isAmbiguous:(bool)arg3 isRTL:(bool)arg4 dialects:(id)arg5 alternateLanguageIDs:(id)arg6 associatedAmbiguousLanguages:(id)arg7;
- (bool)isAmbiguous;
- (bool)isRTL;
- (bool)isWestern;
- (void)setAlternateLanguageIDs:(id)arg1;
- (void)setAmbiguous:(bool)arg1;
- (void)setAssociatedAmbiguousLanguages:(id)arg1;
- (void)setDialects:(id)arg1;
- (void)setGeneralLanguageID:(id)arg1;
- (void)setRtl:(bool)arg1;
- (void)setUserPreferredDialect:(id)arg1;
- (void)setWestern:(bool)arg1;
- (id)userLocaleDialect;
- (id)userPreferredDialect;

@end