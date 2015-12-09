<?php
/**
 * @file
 * govi_informaci_n_institucional.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_informaci_n_institucional_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'infointitusional';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'infointitusional';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'infointitusional';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: imagen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: adjunto */
  $handler->display->display_options['fields']['field_adjunto']['id'] = 'field_adjunto';
  $handler->display->display_options['fields']['field_adjunto']['table'] = 'field_data_field_adjunto';
  $handler->display->display_options['fields']['field_adjunto']['field'] = 'field_adjunto';
  $handler->display->display_options['fields']['field_adjunto']['label'] = '';
  $handler->display->display_options['fields']['field_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adjunto']['click_sort_column'] = 'fid';
  /* Field: Content: orden de visualización  */
  $handler->display->display_options['fields']['field_orden_de_visualizaci_n_']['id'] = 'field_orden_de_visualizaci_n_';
  $handler->display->display_options['fields']['field_orden_de_visualizaci_n_']['table'] = 'field_data_field_orden_de_visualizaci_n_';
  $handler->display->display_options['fields']['field_orden_de_visualizaci_n_']['field'] = 'field_orden_de_visualizaci_n_';
  $handler->display->display_options['fields']['field_orden_de_visualizaci_n_']['label'] = '';
  $handler->display->display_options['fields']['field_orden_de_visualizaci_n_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_orden_de_visualizaci_n_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tipo de contenido */
  $handler->display->display_options['fields']['field_tipo_de_contenido']['id'] = 'field_tipo_de_contenido';
  $handler->display->display_options['fields']['field_tipo_de_contenido']['table'] = 'field_data_field_tipo_de_contenido';
  $handler->display->display_options['fields']['field_tipo_de_contenido']['field'] = 'field_tipo_de_contenido';
  $handler->display->display_options['fields']['field_tipo_de_contenido']['label'] = '';
  $handler->display->display_options['fields']['field_tipo_de_contenido']['element_label_colon'] = FALSE;
  /* Field: Content: palabras clave */
  $handler->display->display_options['fields']['field_palabras_clave']['id'] = 'field_palabras_clave';
  $handler->display->display_options['fields']['field_palabras_clave']['table'] = 'field_data_field_palabras_clave';
  $handler->display->display_options['fields']['field_palabras_clave']['field'] = 'field_palabras_clave';
  $handler->display->display_options['fields']['field_palabras_clave']['label'] = '';
  $handler->display->display_options['fields']['field_palabras_clave']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_palabras_clave']['delta_offset'] = '0';
  /* Sort criterion: Content: orden de visualización  (field_orden_de_visualizaci_n_) */
  $handler->display->display_options['sorts']['field_orden_de_visualizaci_n__value']['id'] = 'field_orden_de_visualizaci_n__value';
  $handler->display->display_options['sorts']['field_orden_de_visualizaci_n__value']['table'] = 'field_data_field_orden_de_visualizaci_n_';
  $handler->display->display_options['sorts']['field_orden_de_visualizaci_n__value']['field'] = 'field_orden_de_visualizaci_n__value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'informacion_institucional' => 'informacion_institucional',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'infointitusional';
  $export['infointitusional'] = $view;

  return $export;
}
