<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "message" && $api == "message") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_message_default_messages().
 */
function atrium_message_message_default_messages() {
  $export = array();
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'comment_create';
  $message->description = '';
  $message->tag = '';
  $message->message = 'commented on @link';
  $message->language = '';

  $export['comment_create'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'node_create';
  $message->description = '';
  $message->tag = '';
  $message->message = 'posted @link';
  $message->language = '';

  $export['node_create'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'node_delete';
  $message->description = '';
  $message->tag = '';
  $message->message = 'deleted @link';
  $message->language = '';

  $export['node_delete'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'node_publish';
  $message->description = '';
  $message->tag = '';
  $message->message = 'restored @link';
  $message->language = '';

  $export['node_publish'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'node_unpublish';
  $message->description = '';
  $message->tag = '';
  $message->message = 'archived @link';
  $message->language = '';

  $export['node_unpublish'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'node_update';
  $message->description = '';
  $message->tag = '';
  $message->message = 'updated @link';
  $message->language = '';

  $export['node_update'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'og_admin_new';
  $message->description = '';
  $message->tag = '';
  $message->message = 'is now an admin of @link';
  $message->language = '';

  $export['og_admin_new'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'og_user_delete';
  $message->description = '';
  $message->tag = '';
  $message->message = 'has left @link';
  $message->language = '';

  $export['og_user_delete'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'og_user_deny';
  $message->description = '';
  $message->tag = '';
  $message->message = 'has been denied membership in @link';
  $message->language = '';

  $export['og_user_deny'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'og_user_insert';
  $message->description = '';
  $message->tag = '';
  $message->message = 'has joined @link';
  $message->language = '';

  $export['og_user_insert'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'og_user_request';
  $message->description = '';
  $message->tag = '';
  $message->message = 'has requested to join @link';
  $message->language = '';

  $export['og_user_request'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'spaces_features_disabled';
  $message->description = '';
  $message->tag = '';
  $message->message = 'disabled the @link feature';
  $message->language = '';

  $export['spaces_features_disabled'] = $message;
  $message = new stdClass;
  $message->disabled = FALSE; /* Edit this to true to make a default message disabled initially */
  $message->api_version = 1;
  $message->name = 'spaces_features_enabled';
  $message->description = '';
  $message->tag = '';
  $message->message = 'enabled the @link feature';
  $message->language = '';

  $export['spaces_features_enabled'] = $message;
  return $export;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_message_views_api() {
  return array(
    'api' => '2',
  );
}
