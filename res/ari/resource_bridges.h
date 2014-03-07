/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_bridges.c
 *
 * Bridge resources
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_BRIDGES_H
#define _ASTERISK_RESOURCE_BRIDGES_H

#include "asterisk/ari.h"

/*! \brief Argument struct for ast_ari_bridges_list() */
struct ast_ari_bridges_list_args {
};
/*!
 * \brief List all active bridges in Asterisk.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_list(struct ast_variable *headers, struct ast_ari_bridges_list_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_create() */
struct ast_ari_bridges_create_args {
	/*! \brief Type of bridge to create. */
	const char *type;
	/*! \brief Unique ID to give to the bridge being created. */
	const char *bridge_id;
	/*! \brief Name to give to the bridge being created. */
	const char *name;
};
/*!
 * \brief Body parsing function for /bridges.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_create_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_create_args *args);

/*!
 * \brief Create a new bridge.
 *
 * This bridge persists until it has been shut down, or Asterisk has been shut down.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_create(struct ast_variable *headers, struct ast_ari_bridges_create_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_create_or_update_with_id() */
struct ast_ari_bridges_create_or_update_with_id_args {
	/*! \brief Set the type of bridge. */
	const char *type;
	/*! \brief Unique ID to give to the bridge being created. */
	const char *bridge_id;
	/*! \brief Set the name of the bridge. */
	const char *name;
};
/*!
 * \brief Body parsing function for /bridges/{bridgeId}.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_create_or_update_with_id_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_create_or_update_with_id_args *args);

/*!
 * \brief Create a new bridge or updates an existing one.
 *
 * This bridge persists until it has been shut down, or Asterisk has been shut down.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_create_or_update_with_id(struct ast_variable *headers, struct ast_ari_bridges_create_or_update_with_id_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_get() */
struct ast_ari_bridges_get_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
};
/*!
 * \brief Get bridge details.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_get(struct ast_variable *headers, struct ast_ari_bridges_get_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_destroy() */
struct ast_ari_bridges_destroy_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
};
/*!
 * \brief Shut down a bridge.
 *
 * If any channels are in this bridge, they will be removed and resume whatever they were doing beforehand.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_destroy(struct ast_variable *headers, struct ast_ari_bridges_destroy_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_add_channel() */
struct ast_ari_bridges_add_channel_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Array of Ids of channels to add to bridge */
	const char **channel;
	/*! \brief Length of channel array. */
	size_t channel_count;
	/*! \brief Parsing context for channel. */
	char *channel_parse;
	/*! \brief Channel's role in the bridge */
	const char *role;
};
/*!
 * \brief Body parsing function for /bridges/{bridgeId}/addChannel.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_add_channel_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_add_channel_args *args);

/*!
 * \brief Add a channel to a bridge.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_add_channel(struct ast_variable *headers, struct ast_ari_bridges_add_channel_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_remove_channel() */
struct ast_ari_bridges_remove_channel_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Array of Ids of channels to remove from bridge */
	const char **channel;
	/*! \brief Length of channel array. */
	size_t channel_count;
	/*! \brief Parsing context for channel. */
	char *channel_parse;
};
/*!
 * \brief Body parsing function for /bridges/{bridgeId}/removeChannel.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_remove_channel_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_remove_channel_args *args);

/*!
 * \brief Remove a channel from a bridge.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_remove_channel(struct ast_variable *headers, struct ast_ari_bridges_remove_channel_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_start_moh() */
struct ast_ari_bridges_start_moh_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Channel's id */
	const char *moh_class;
};
/*!
 * \brief Body parsing function for /bridges/{bridgeId}/moh.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_start_moh_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_start_moh_args *args);

/*!
 * \brief Play music on hold to a bridge or change the MOH class that is playing.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_start_moh(struct ast_variable *headers, struct ast_ari_bridges_start_moh_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_stop_moh() */
struct ast_ari_bridges_stop_moh_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
};
/*!
 * \brief Stop playing music on hold to a bridge.
 *
 * This will only stop music on hold being played via POST bridges/{bridgeId}/moh.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_stop_moh(struct ast_variable *headers, struct ast_ari_bridges_stop_moh_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_play() */
struct ast_ari_bridges_play_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Media's URI to play. */
	const char *media;
	/*! \brief For sounds, selects language for sound. */
	const char *lang;
	/*! \brief Number of media to skip before playing. */
	int offsetms;
	/*! \brief Number of milliseconds to skip for forward/reverse operations. */
	int skipms;
};
/*!
 * \brief Body parsing function for /bridges/{bridgeId}/play.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_play_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_play_args *args);

/*!
 * \brief Start playback of media on a bridge.
 *
 * The media URI may be any of a number of URI's. Currently sound: and recording: URI's are supported. This operation creates a playback resource that can be used to control the playback of media (pause, rewind, fast forward, etc.)
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_play(struct ast_variable *headers, struct ast_ari_bridges_play_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_bridges_record() */
struct ast_ari_bridges_record_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Recording's filename */
	const char *name;
	/*! \brief Format to encode audio in */
	const char *format;
	/*! \brief Maximum duration of the recording, in seconds. 0 for no limit. */
	int max_duration_seconds;
	/*! \brief Maximum duration of silence, in seconds. 0 for no limit. */
	int max_silence_seconds;
	/*! \brief Action to take if a recording with the same name already exists. */
	const char *if_exists;
	/*! \brief Play beep when recording begins */
	int beep;
	/*! \brief DTMF input to terminate recording. */
	const char *terminate_on;
};
/*!
 * \brief Body parsing function for /bridges/{bridgeId}/record.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_bridges_record_parse_body(
	struct ast_json *body,
	struct ast_ari_bridges_record_args *args);

/*!
 * \brief Start a recording.
 *
 * This records the mixed audio from all channels participating in this bridge.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_bridges_record(struct ast_variable *headers, struct ast_ari_bridges_record_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_BRIDGES_H */