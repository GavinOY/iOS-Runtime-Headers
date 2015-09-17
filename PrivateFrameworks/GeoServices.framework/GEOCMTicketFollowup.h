/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCMTicketFollowup : PBCodable <NSCopying> {
    NSString *_ticketId;
    NSString *_userEmail;
}

@property (nonatomic, readonly) BOOL hasTicketId;
@property (nonatomic, readonly) BOOL hasUserEmail;
@property (nonatomic, retain) NSString *ticketId;
@property (nonatomic, retain) NSString *userEmail;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTicketId;
- (BOOL)hasUserEmail;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTicketId:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)ticketId;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end