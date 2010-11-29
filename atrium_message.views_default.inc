<?php

/**
 * Implementation of hook_views_default_views().
 */
function atrium_message_views_default_views() {
  $views = array();

  // Exported view: atrium_message
  $view = new view;
  $view->name = 'atrium_message';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'message_instance';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'iid' => array(
      'label' => 'Message realm',
      'required' => 0,
      'id' => 'iid',
      'table' => 'message_instance',
      'field' => 'iid',
      'relationship' => 'none',
    ),
    'uid' => array(
      'label' => 'Message user',
      'required' => 0,
      'id' => 'uid',
      'table' => 'message_instance',
      'field' => 'uid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'timestamp_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'reldate' => 'day',
      'exclude' => 1,
      'id' => 'timestamp_1',
      'table' => 'message_instance',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'reldate' => 'time',
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'message_instance',
      'field' => 'timestamp',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 1,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'uid',
    ),
    'render' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '[name] [render]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'skip_access' => 1,
      'exclude' => 0,
      'id' => 'render',
      'table' => 'message_instance',
      'field' => 'render',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'timestamp' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'timestamp',
      'table' => 'message_instance',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'realm_id' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'empty',
      'glossary' => 0,
      'limit' => '0',
      'case' => 'none',
      'path_case' => 'none',
      'transform_dash' => 0,
      'id' => 'realm_id',
      'table' => 'message_realm',
      'field' => 'realm_id',
      'relationship' => 'iid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => 'return atrium_message_get_spaces();
',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'book' => 0,
        'event' => 0,
        'feed_ical' => 0,
        'feed_ical_item' => 0,
        'group' => 0,
        'profile' => 0,
        'shoutbox' => 0,
        'casetracker_basic_case' => 0,
        'casetracker_basic_project' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
      'validate_argument_group_node_type' => array(
        'group' => 0,
      ),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'message_plugin_realm' => array(
      'operator' => 'in',
      'value' => array(
        'message_plugin_og' => 'message_plugin_og',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'message_plugin_realm',
      'table' => 'message_realm',
      'field' => 'message_plugin_realm',
      'relationship' => 'iid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Recent activity');
  $handler->override_option('empty', 'No recent activity found.');
  $handler->override_option('empty_format', '5');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 15);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => 'timestamp_1',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'timestamp_1' => 'timestamp_1',
      'timestamp' => 'timestamp',
      'name' => 'name',
      'render' => 'render',
    ),
    'info' => array(
      'timestamp_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'timestamp' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'render' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'name' => 'name',
      'render' => 'render',
      'timestamp' => 'timestamp',
    ),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('block', 'OG Block', 'block_1');
  $handler->override_option('block_description', 'Messages: Recent activity');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'OG Admin Block', 'block_2');
  $handler->override_option('filters', array(
    'message_plugin_realm' => array(
      'operator' => 'in',
      'value' => array(
        'message_plugin_og' => 'message_plugin_og',
        'message_plugin_og_admin' => 'message_plugin_og_admin',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'message_plugin_realm',
      'table' => 'message_realm',
      'field' => 'message_plugin_realm',
      'relationship' => 'iid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('block_description', 'Messages: Recent activity [Group Admins]');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'User Block', 'block_3');
  $handler->override_option('fields', array(
    'timestamp_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'reldate' => 'day',
      'exclude' => 1,
      'id' => 'timestamp_1',
      'table' => 'message_instance',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'reldate' => 'reldate',
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'message_instance',
      'field' => 'timestamp',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 1,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'uid',
    ),
    'render' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '[name] [render]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'skip_access' => 1,
      'exclude' => 0,
      'id' => 'render',
      'table' => 'message_instance',
      'field' => 'render',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'realm_id' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'user',
      'default_argument' => '',
      'validate_type' => 'user',
      'validate_fail' => 'empty',
      'glossary' => 0,
      'limit' => '0',
      'case' => 'none',
      'path_case' => 'none',
      'transform_dash' => 0,
      'id' => 'realm_id',
      'table' => 'message_realm',
      'field' => 'realm_id',
      'relationship' => 'iid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'book' => 0,
        'event' => 0,
        'feed_ical' => 0,
        'feed_ical_item' => 0,
        'group' => 0,
        'profile' => 0,
        'shoutbox' => 0,
        'feed_reader' => 0,
        'presentation' => 0,
        'casetracker_basic_case' => 0,
        'casetracker_basic_project' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
        '3' => 0,
        '2' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
      'validate_argument_group_node_type' => array(
        'group' => 0,
      ),
      'validate_argument_php' => '',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('filters', array());
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'timestamp_1' => 'timestamp_1',
      'timestamp' => 'timestamp',
      'name' => 'name',
      'render' => 'render',
    ),
    'info' => array(
      'timestamp_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'timestamp' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'render' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('block_description', 'Message: User Activity');
  $handler->override_option('block_caching', -1);
  $translatables['atrium_message'] = array(
    t('Defaults'),
    t('Message: User Activity'),
    t('Messages: Recent activity'),
    t('Messages: Recent activity [Group Admins]'),
    t('No recent activity found.'),
    t('OG Admin Block'),
    t('OG Block'),
    t('Recent activity'),
    t('User Block'),
  );

  $views[$view->name] = $view;

  return $views;
}
