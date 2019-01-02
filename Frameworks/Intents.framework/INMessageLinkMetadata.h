/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INMessageLinkMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _albumArtist;
    NSString * _albumName;
    NSString * _artistGenre;
    NSString * _artistName;
    NSString * _audioBookAuthor;
    NSString * _audioBookName;
    NSString * _audioBookNarrator;
    NSString * _bookAuthor;
    NSString * _bookName;
    NSString * _creator;
    NSString * _iTunesStoreFrontIdentifier;
    NSString * _iTunesStoreIdentifier;
    NSArray * _iconURLs;
    NSArray * _imageURLs;
    NSString * _itemType;
    long long  _linkMediaType;
    NSString * _movieGenre;
    NSString * _movieName;
    NSString * _musicVideoArtist;
    NSString * _musicVideoName;
    NSString * _originalURL;
    NSString * _playlistCurator;
    NSString * _playlistName;
    NSString * _podcastArtist;
    NSString * _podcastEpisodeArtist;
    NSString * _podcastEpisodeName;
    NSString * _podcastEpisodePodcastName;
    NSDateComponents * _podcastEpisodeReleaseDate;
    NSString * _podcastName;
    NSString * _radioCurator;
    NSString * _radioName;
    NSString * _siteName;
    NSString * _softwareGenre;
    NSString * _softwareName;
    NSString * _softwarePlatform;
    NSString * _songAlbum;
    NSString * _songArtist;
    NSString * _songTitle;
    NSString * _summary;
    NSString * _title;
    NSString * _tvEpisodeEpisodeName;
    NSString * _tvEpisodeGenre;
    NSString * _tvEpisodeSeasonName;
    NSString * _tvSeasonGenre;
    NSString * _tvSeasonName;
}

@property (nonatomic, copy) NSString *albumArtist;
@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *artistGenre;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *audioBookAuthor;
@property (nonatomic, copy) NSString *audioBookName;
@property (nonatomic, copy) NSString *audioBookNarrator;
@property (nonatomic, copy) NSString *bookAuthor;
@property (nonatomic, copy) NSString *bookName;
@property (nonatomic, copy) NSString *creator;
@property (nonatomic, copy) NSString *iTunesStoreFrontIdentifier;
@property (nonatomic, copy) NSString *iTunesStoreIdentifier;
@property (nonatomic, copy) NSArray *iconURLs;
@property (nonatomic, copy) NSArray *imageURLs;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic) long long linkMediaType;
@property (nonatomic, copy) NSString *movieGenre;
@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, copy) NSString *musicVideoArtist;
@property (nonatomic, copy) NSString *musicVideoName;
@property (nonatomic, copy) NSString *originalURL;
@property (nonatomic, copy) NSString *playlistCurator;
@property (nonatomic, copy) NSString *playlistName;
@property (nonatomic, copy) NSString *podcastArtist;
@property (nonatomic, copy) NSString *podcastEpisodeArtist;
@property (nonatomic, copy) NSString *podcastEpisodeName;
@property (nonatomic, copy) NSString *podcastEpisodePodcastName;
@property (nonatomic, copy) NSDateComponents *podcastEpisodeReleaseDate;
@property (nonatomic, copy) NSString *podcastName;
@property (nonatomic, copy) NSString *radioCurator;
@property (nonatomic, copy) NSString *radioName;
@property (nonatomic, copy) NSString *siteName;
@property (nonatomic, copy) NSString *softwareGenre;
@property (nonatomic, copy) NSString *softwareName;
@property (nonatomic, copy) NSString *softwarePlatform;
@property (nonatomic, copy) NSString *songAlbum;
@property (nonatomic, copy) NSString *songArtist;
@property (nonatomic, copy) NSString *songTitle;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *tvEpisodeEpisodeName;
@property (nonatomic, copy) NSString *tvEpisodeGenre;
@property (nonatomic, copy) NSString *tvEpisodeSeasonName;
@property (nonatomic, copy) NSString *tvSeasonGenre;
@property (nonatomic, copy) NSString *tvSeasonName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)albumArtist;
- (id)albumName;
- (id)artistGenre;
- (id)artistName;
- (id)audioBookAuthor;
- (id)audioBookName;
- (id)audioBookNarrator;
- (id)bookAuthor;
- (id)bookName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creator;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iTunesStoreFrontIdentifier;
- (id)iTunesStoreIdentifier;
- (id)iconURLs;
- (id)imageURLs;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45;
- (bool)isEqual:(id)arg1;
- (id)itemType;
- (long long)linkMediaType;
- (id)movieGenre;
- (id)movieName;
- (id)musicVideoArtist;
- (id)musicVideoName;
- (id)originalURL;
- (id)playlistCurator;
- (id)playlistName;
- (id)podcastArtist;
- (id)podcastEpisodeArtist;
- (id)podcastEpisodeName;
- (id)podcastEpisodePodcastName;
- (id)podcastEpisodeReleaseDate;
- (id)podcastName;
- (id)radioCurator;
- (id)radioName;
- (void)setAlbumArtist:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistGenre:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAudioBookAuthor:(id)arg1;
- (void)setAudioBookName:(id)arg1;
- (void)setAudioBookNarrator:(id)arg1;
- (void)setBookAuthor:(id)arg1;
- (void)setBookName:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setITunesStoreFrontIdentifier:(id)arg1;
- (void)setITunesStoreIdentifier:(id)arg1;
- (void)setIconURLs:(id)arg1;
- (void)setImageURLs:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setLinkMediaType:(long long)arg1;
- (void)setMovieGenre:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setMusicVideoArtist:(id)arg1;
- (void)setMusicVideoName:(id)arg1;
- (void)setOriginalURL:(id)arg1;
- (void)setPlaylistCurator:(id)arg1;
- (void)setPlaylistName:(id)arg1;
- (void)setPodcastArtist:(id)arg1;
- (void)setPodcastEpisodeArtist:(id)arg1;
- (void)setPodcastEpisodeName:(id)arg1;
- (void)setPodcastEpisodePodcastName:(id)arg1;
- (void)setPodcastEpisodeReleaseDate:(id)arg1;
- (void)setPodcastName:(id)arg1;
- (void)setRadioCurator:(id)arg1;
- (void)setRadioName:(id)arg1;
- (void)setSiteName:(id)arg1;
- (void)setSoftwareGenre:(id)arg1;
- (void)setSoftwareName:(id)arg1;
- (void)setSoftwarePlatform:(id)arg1;
- (void)setSongAlbum:(id)arg1;
- (void)setSongArtist:(id)arg1;
- (void)setSongTitle:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTvEpisodeEpisodeName:(id)arg1;
- (void)setTvEpisodeGenre:(id)arg1;
- (void)setTvEpisodeSeasonName:(id)arg1;
- (void)setTvSeasonGenre:(id)arg1;
- (void)setTvSeasonName:(id)arg1;
- (id)siteName;
- (id)softwareGenre;
- (id)softwareName;
- (id)softwarePlatform;
- (id)songAlbum;
- (id)songArtist;
- (id)songTitle;
- (id)summary;
- (id)title;
- (id)tvEpisodeEpisodeName;
- (id)tvEpisodeGenre;
- (id)tvEpisodeSeasonName;
- (id)tvSeasonGenre;
- (id)tvSeasonName;

@end
