<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thacker_profile_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile';
  $context->description = 'The users overview';
  $context->tag = 'section';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'user_page' => 'user_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-user_page-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-user_page-page_1',
          'region' => 'preface_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The users overview');
  t('section');

  $export['profile'] = $context;
  return $export;
}
