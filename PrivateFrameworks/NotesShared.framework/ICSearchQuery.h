/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchQuery : NSObject {
    NSString * _highlightString;
    NSDictionary * _queryResults;
    NSString * _queryString;
    unsigned long long  _rankingInterpretation;
    NSArray * _rankingQueries;
    CSSearchQuery * _searchQuery;
}

@property (nonatomic, retain) NSString *highlightString;
@property (nonatomic, retain) NSDictionary *queryResults;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic) unsigned long long rankingInterpretation;
@property (nonatomic, retain) NSArray *rankingQueries;
@property (nonatomic, retain) CSSearchQuery *searchQuery;

- (void).cxx_destruct;
- (void)cancel;
- (id)highlightString;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 rankingInterpretation:(unsigned long long)arg3 highlightString:(id)arg4;
- (id)queryResults;
- (id)queryString;
- (unsigned long long)rankingInterpretation;
- (id)rankingQueries;
- (bool)run:(id*)arg1;
- (id)searchQuery;
- (void)setHighlightString:(id)arg1;
- (void)setQueryResults:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setRankingInterpretation:(unsigned long long)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setup;

@end
